var addon = require('bindings')('my_addon');

var sum = addon.add5(10);
console.log(sum);
