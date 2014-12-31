#include <nan.h>
#include <lxc/lxccontainer.h>

using namespace v8;

NAN_METHOD(Version) {
  NanScope();

  Local<String> version = NanNew<String>(lxc_get_version());

  NanReturnValue(version);
}

void Init(Handle<Object> exports) {
  exports->Set(NanNew("version"), NanNew<FunctionTemplate>(Version)->GetFunction());
}

NODE_MODULE(lxcjs, Init)
