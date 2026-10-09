// ————————————————————

/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

ctx.beginPath();
ctx.moveTo(100, 200); // Início
// CP1 em (150, 50) - Ímã puxando forte para cima
// CP2 em (250, 450) - Ímã puxando forte para baixo
// Fim em (350, 250) - Destino Final
ctx.bezierCurveTo(100, 100, 250, 450, 350, 250);
ctx.lineWidth = 5;
ctx.strokeStyle = "#e74c3c"; // Vermelho
ctx.stroke();
