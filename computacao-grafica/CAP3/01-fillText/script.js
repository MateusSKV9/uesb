/** @type {HTMLCanvasElement} */
const canvas = document.querySelector("#canvas");

/** @type {CanvasRenderingContext2D} */
const ctx = canvas.getContext("2d");

// (Texto, Posição X, Posição Y)
ctx.fillStyle = "red"; // Cor do texto
ctx.fillText("HELLO, WORLD!", 50, 50);

ctx.fillStyle = "green";
ctx.fillText("FULL STACK DEVELOPER", 50, 70);

ctx.fillStyle = "blue";
ctx.fillText("MATEUS SANTOS", 50, 90);
