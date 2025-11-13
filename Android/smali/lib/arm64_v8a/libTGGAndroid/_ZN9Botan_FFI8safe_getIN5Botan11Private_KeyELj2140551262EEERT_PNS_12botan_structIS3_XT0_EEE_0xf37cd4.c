// 函数: _ZN9Botan_FFI8safe_getIN5Botan11Private_KeyELj2140551262EEERT_PNS_12botan_structIS3_XT0_EEE
// 地址: 0xf37cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    char* x0 = __cxa_allocate_exception(0x28)
    void** x19 = x0
    char var_40_1
    __builtin_strncpy(&var_40_1, "*Null pointer argument", 0x17)
    Botan::Exception::Exception(x0, "FFI error")
    x19[4].d = 0xffffffe1
    *x19 = _vtable_for_Botan_FFI::FFI_Error + 0x10
    __cxa_throw(x19, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
    noreturn

if (*(arg1 + 8) != 0x7f96385e)
    void** x0_2 = __cxa_allocate_exception(0x28)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x20)
    int128_t var_3f
    var_3f:0xf.q = x0_3
    char var_40
    var_40.o = data_71c520
    __builtin_strncpy(x0_3, "Bad magic in ffi object", 0x18)
    Botan::Exception::Exception(x0_2, "FFI error")
    x0_2[4].d = 0xffffffce
    *x0_2 = _vtable_for_Botan_FFI::FFI_Error + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
    noreturn

int64_t result = *(arg1 + 0x10)

if (result != 0)
    return result

char* x0_6 = __cxa_allocate_exception(0x28)
void** x19_2 = x0_6
char var_40_2
__builtin_strncpy(&var_40_2, ",Invalid object pointer", 0x18)
Botan::Exception::Exception(x0_6, "FFI error")
x19_2[4].d = 0xffffffce
*x19_2 = _vtable_for_Botan_FFI::FFI_Error + 0x10
__cxa_throw(x19_2, _typeinfo_for_Botan_FFI::FFI_Error, Botan::Exception::~Exception)
noreturn
