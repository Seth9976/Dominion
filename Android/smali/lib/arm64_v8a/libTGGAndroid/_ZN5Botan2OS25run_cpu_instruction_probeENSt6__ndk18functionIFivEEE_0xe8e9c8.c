// 函数: _ZN5Botan2OS25run_cpu_instruction_probeENSt6__ndk18functionIFivEEE
// 地址: 0xe8e9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_24 = 0xfffffffd
void (* var_60)() __noreturn = sub_e8ebd4
void set
sigemptyset(&set)
int32_t act = 0
int128_t var_80
void var_48

if (sigaction(4, &act, &var_48) != 0)
    void* x0_7 = __cxa_allocate_exception(0x28)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x30)
    int64_t var_70 = x0_8
    var_80 = data_71c1e0
    __builtin_strncpy(x0_8, "run_cpu_instruction_probe sigaction failed", 0x2b)
    *__errno()
    Botan::System_Error::System_Error(x0_7, &var_80)
    __cxa_throw(x0_7, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

int32_t x0_2 = sigsetjmp(0x23ec7e8, 1)

if (x0_2 == 1)
    var_24 = 0xffffffff
else if (x0_2 == 0)
    int64_t* x0_3 = *(arg1 + 0x20)
    
    if (x0_3 == 0)
        sub_a58ab4()
        noreturn
    
    var_24 = (*(*x0_3 + 0x30))()

if (sigaction(4, &var_48, nullptr) == 0)
    return zx.q(var_24)

void* x0_12 = __cxa_allocate_exception(0x28)
int64_t x0_13
int128_t v0_1
x0_13, v0_1 = operator new(0x40)
var_80 = data_71ac10
int64_t var_70_1 = x0_13
__builtin_strncpy(x0_13, "run_cpu_instruction_probe sigaction restore failed", 0x33)
*__errno()
Botan::System_Error::System_Error(x0_12, &var_80)
__cxa_throw(x0_12, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
noreturn
