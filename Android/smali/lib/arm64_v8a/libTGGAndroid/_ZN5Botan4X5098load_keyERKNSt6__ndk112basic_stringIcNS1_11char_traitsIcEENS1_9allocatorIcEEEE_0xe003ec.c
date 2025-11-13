// 函数: _ZN5Botan4X5098load_keyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe003ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_48
Botan::DataSource_Stream::DataSource_Stream(&var_48, arg1.b)
int64_t result = Botan::X509::load_key(&var_48)
int64_t var_28_1 = 0
var_48 = _vtable_for_Botan::DataSource_Stream + 0x10
int64_t* var_28

if (var_28 != 0)
    (*(*var_28 + 8))()

char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
return result
