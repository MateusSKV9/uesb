const canvas = document.querySelector("#canvas");
const ctx = canvas.getContext("2d");
ctx.strokeStyle = "green";

ctx.moveTo(0, 250);
ctx.lineTo(500, 250);
ctx.stroke();

ctx.moveTo(250, 0);
ctx.lineTo(250, 500);
ctx.stroke();

ctx.beginPath();
ctx.arc(250, 250, 25, 0, 360);
ctx.arc(250, 250, 50, 0, 360);
ctx.arc(250, 250, 100, 0, 360);
ctx.arc(250, 250, 150, 0, 360);
ctx.arc(250, 250, 200, 0, 360);
ctx.stroke();

ctx.closePath();
