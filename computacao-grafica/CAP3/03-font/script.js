/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

// Alterando tamanho e família
ctx.font = "32px Arial";
ctx.fillText("Texto em Arial", 50, 100);

// Usando itálico, negrito (bold) e tamanho
ctx.font = 'bold 40px "Times New Roman"';
ctx.fillText("Texto em negrito", 50, 150);

ctx.font = 'italic 40px "Times New Roman"';
ctx.fillText("Texto em itálico", 50, 200);

ctx.font = 'bold italic 40px "Times New Roman"';
ctx.fillText("Texto em itálico & negrito", 50, 250);
