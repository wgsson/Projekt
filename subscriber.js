const mqtt = require("mqtt");
const WebSocket = require("ws");

// Starta WebSocket-server på port 8080
const wss = new WebSocket.Server({ port: 8080 });
wss.on("connection", ws => {
  console.log("Webbläsare ansluten via WebSocket");
});

// Anslut till lokal MQTT-broker
const client = mqtt.connect("mqtt://localhost");

client.on("connect", () => {
  console.log("MQTT connected!");
  client.subscribe("sensor/data");
});

client.on("message", (topic, message) => {
  const msg = message.toString();
  console.log("Data mottagen:", msg);

  // Skicka till alla anslutna webbläsare
  wss.clients.forEach(ws => {
    if (ws.readyState === WebSocket.OPEN) {
      ws.send(msg);
    }
  });
});
