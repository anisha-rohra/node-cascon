#include <node.h>
#include <v8.h>

using namespace v8;

void HelloWorldMethod(const v8::FunctionCallbackInfo<Value>& args) {
  Isolate* v8_engine = Isolate::GetCurrent();
  HandleScope scope(v8_engine);
 
  Local<String> hello_string = String::NewFromUtf8(v8_engine, "hello world"); 
  args.GetReturnValue().Set(hello_string);
}

void HelloWorldInit(Handle<Object> exports) {
  Isolate* v8_engine = Isolate::GetCurrent();
  
  Local<String> js_func = String::NewFromUtf8(v8_engine, "hello");
  Local<Function> c_func = FunctionTemplate::New(v8_engine, HelloWorldMethod)->GetFunction();

  exports->Set(js_func, c_func);
}

NODE_MODULE(hello_addon, HelloWorldInit)
