// CAPTURA & CONTEXTO

/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");
/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

// // PROPRIEDADES BÁSICAS
// ctx.fillStyle = "#223344";
// ctx.fillRect(50, 50, 100, 200);

// ctx.strokeStyle = "#ff0000";
// ctx.lineWidth = 10;
// ctx.strokeRect(50, 50, 100, 200);

ctx.beginPath();
ctx.moveTo(0, 0);
ctx.lineTo(300, 400);

ctx.lineWidth = 4;
ctx.strokeStyle = "black";

ctx.lineTo(600, 0);
ctx.stroke();

ctx.beginPath();
ctx.arc(300, 200, 50, 0, 360);
ctx.stroke();

ctx.beginPath();

ctx.arc(300, 200, 25, 0, 360);
ctx.fill();
ctx.stroke();

ctx.closePath();
