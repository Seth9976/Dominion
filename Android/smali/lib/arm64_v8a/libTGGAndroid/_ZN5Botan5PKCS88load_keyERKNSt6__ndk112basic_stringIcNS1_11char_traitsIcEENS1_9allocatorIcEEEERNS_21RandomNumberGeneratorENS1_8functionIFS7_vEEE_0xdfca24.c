// 函数: _ZN5Botan5PKCS88load_keyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_21RandomNumberGeneratorENS1_8functionIFS7_vEEE
// 地址: 0xdfca24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
void* x19 = arg3
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_c8
Botan::DataSource_Stream::DataSource_Stream(&var_c8, arg1.b)
int64_t* x0_1 = *(x19 + 0x20)
void var_90
int64_t* var_70
void var_60
int64_t* var_40

if (x0_1 == 0)
    var_70 = nullptr
    
    if (x0_1 == 0)
        var_40 = nullptr
    else
    label_dfca84:
        
        if (&var_90 == x0_1)
            var_40 = &var_60
            (*(*x0_1 + 0x18))(x0_1, &var_60)
        else
            var_40 = (*(*x0_1 + 0x10))()
else if (x19 == x0_1)
    var_70 = &var_90
    (*(*x0_1 + 0x18))(x0_1, &var_90)
    x0_1 = var_70
    
    if (x0_1 != 0)
        goto label_dfca84
    
    var_40 = nullptr
else
    x0_1 = (*(*x0_1 + 0x10))()
    var_70 = x0_1
    
    if (x0_1 != 0)
        goto label_dfca84
    
    var_40 = nullptr

int64_t result_1
sub_dfb2d0(&result_1, &var_c8, &var_60, 1)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

int64_t result = result_1

if (&var_90 == var_70)
    (*(*var_70 + 0x20))()
else if (var_70 != 0)
    (*(*var_70 + 0x28))()

int64_t var_a8_1 = 0
var_c8 = _vtable_for_Botan::DataSource_Stream + 0x10
int64_t* var_a8

if (var_a8 != 0)
    (*(*var_a8 + 8))()

char var_c0
void* var_b0

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
