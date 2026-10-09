// ————————————————————

/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

ctx.beginPath();
ctx.moveTo(200, 150); // Ponto de Início (A)

// Ponto de Controle em (200, 350)
// Destino Final em (350, 200)

ctx.quadraticCurveTo(50, 80, 200, 300); // curva 1

ctx.moveTo(200, 150); // Ponto de Início (B)

ctx.quadraticCurveTo(350, 80, 200, 300); // curva2

ctx.strokeStyle = "red";
ctx.lineWidth = 5;
ctx.stroke();
