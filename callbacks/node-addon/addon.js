var addon = require('bindings')('addon');

addon.callback(function(msg){
  console.log(msg); // 'hello world'
});
