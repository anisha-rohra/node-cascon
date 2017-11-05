#include <node.h>
#include <v8.h>

using namespace v8;

void HelloWorldMethod(const v8::FunctionCallbackInfo<Value>& args) {
  Isolate* v8_engine = Isolate::GetCurrent();
  HandleScope scope(v8_engine);
  args.GetReturnValue().Set(String::NewFromUtf8(v8_engine, "hello world"));
}

void HelloWorldInit(Handle<Object> exports) {
  Isolate* v8_engine = Isolate::GetCurrent();
  
  String string = String::New(v8_engine, "hello");
  FunctionTemplate func = FunctionTemplate::New(v8_engine, HelloWorldMethod)->GetFunction();

  exports->Set(string, func);
}

NODE_MODULE(hello_addon, HelloWorldInit)
