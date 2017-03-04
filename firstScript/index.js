var five = require("johnny-five");
var board = new five.Board({debug:false,repl:false});

board.on("ready", function() {
  var led = new five.Led(11);
  // led.blink(100);
  led.pulse(2000);
});
