const WebSocket = require("ws");

// Starta WebSocket-server på port 8080
const wss = new WebSocket.Server({ port: 8080 });
console.log("WebSocket-server körs på port 8080");

wss.on("connection", ws => {
  console.log("Webbläsare ansluten via WebSocket");

  // Skicka testmeddelande varje 2 sekunder
  setInterval(() => {
    ws.send(JSON.stringify({ temp: Math.floor(Math.random()*10 + 20), humidity: Math.floor(Math.random()*20 + 40) }));
  }, 2000);
});
