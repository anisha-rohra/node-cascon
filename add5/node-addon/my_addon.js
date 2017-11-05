var addon = require('bindings')('my_addon');

var added_value = addon.add5(10);
console.log(added_value);
