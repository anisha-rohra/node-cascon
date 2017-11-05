#include <node.h>
#include <v8.h>

using namespace v8;

void Add5Method(const v8::FunctionCallbackInfo<Value>& args) {
  Isolate* v8_engine = Isolate::GetCurrent();
  HandleScope scope(v8_engine); 
 
  double value_given = args[0]->NumberValue();
  double value_added = value_given + 5;

  Local<Number> return_value = Number::New(v8_engine, value_added);
  args.GetReturnValue().Set(return_value);
}

void Add5Init(Handle<Object> exports) {
  Isolate* v8_engine = Isolate::GetCurrent();
  
  Local<String> js_func = String::NewFromUtf8(v8_engine, "add5");
  Local<Function> c_func = FunctionTemplate::New(v8_engine, Add5Method)->GetFunction();
  
  exports->Set(js_func, c_func);
}

NODE_MODULE(my_addon, Add5Init)
