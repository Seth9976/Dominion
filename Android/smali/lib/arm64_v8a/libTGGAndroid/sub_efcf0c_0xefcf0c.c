// 函数: sub_efcf0c
// 地址: 0xefcf0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x24 = Botan::EC_Group::data() + 0x110
Botan::OS2ECP(arg2, arg3, Botan::EC_Group::data())
void var_150
Botan::operator*(x24, &var_150)
Botan::PointGFp::~PointGFp()
*(arg1 + 0x48)
Botan::BigInt var_c8
Botan::PointGFp::randomize_repr(&var_c8)
Botan::EC_Group::blinded_var_point_multiply(arg1 + 0x10, &var_c8, arg1 + 0x20, *(arg1 + 0x48))
char var_198
void* var_188

if ((Botan::PointGFp::on_the_curve() & 1) != 0)
    Botan::PointGFp::get_affine_x()
    Botan::BigInt::encode_1363(&var_198, (*(Botan::EC_Group::data() + 0x1e0) + 7) u>> 3)
    void* x0_12 = var_198.q
    
    if (x0_12 != 0)
        void* var_190_1 = x0_12
        Botan::deallocate_memory(x0_12, (var_188 - x0_12) s>> 2, 4)
    
    Botan::PointGFp::~PointGFp()
    return Botan::PointGFp::~PointGFp()

void** x0_14 = __cxa_allocate_exception(0x20)
int64_t x0_15
int128_t v0
x0_15, v0 = operator new(0x30)
int64_t var_160 = x0_15
int128_t var_170 = data_71b5b0
__builtin_strncpy(x0_15, "ECDH agreed value was not on the curve", 0x27)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_170)
*x0_14 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_14[1])

if ((zx.d(var_198) & 1) != 0)
    operator delete(var_188)

*x0_14 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_14, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
