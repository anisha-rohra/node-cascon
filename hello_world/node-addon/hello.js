var addon = require('bindings')('hello_addon');

console.log(addon.hello()); // 'world'
