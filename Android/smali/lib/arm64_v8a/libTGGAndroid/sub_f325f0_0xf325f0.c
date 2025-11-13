// 函数: sub_f325f0
// 地址: 0xf325f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_10 = arg2
char* x21 = *(arg1 + 8)
size_t x0_1 = strlen(x21)
int64_t* var_50

if (x0_1 u>= -0x10)
    int64_t* x0_13 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    int64_t* x0_14 = var_50
    var_50 = nullptr
    
    if (x0_14 != 0)
        (*(*x0_14 + 8))()
    
    (*(*arg2 + 8))(arg2)
    sub_1101e04(x0_13)
    noreturn

void* var_40
void* x22

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_3 = operator new(x23_1)
    x22 = x0_3
    size_t var_48_1 = x0_1
    var_40 = x0_3
    var_50 = x23_1 | 1
    memcpy(x22, x21, x0_1)
else
    x22 = &var_50 | 1
    var_50.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        memcpy(x22, x21, x0_1)

*(x22 + x0_1) = 0
int16_t var_68 = 0
Botan::PasswordHashFamily::create(&var_50, &var_68)

if ((zx.d(var_68.b) & 1) == 0)
    if ((zx.d(var_50.b) & 1) != 0)
        goto label_f32718
    
    goto label_f32694

void* var_58
operator delete(var_58)
int64_t* x20_1
int64_t* var_38

if ((zx.d(var_50.b) & 1) == 0)
label_f32694:
    x20_1 = var_38
    
    if (x20_1 == 0)
        return 0xffffffd8
else
label_f32718:
    operator delete(var_40)
    x20_1 = var_38
    
    if (x20_1 == 0)
        return 0xffffffd8
(*(*x20_1 + 0x30))(x20_1, *(arg1 + 0x10), *(arg1 + 0x18), *(arg1 + 0x20))
int64_t* x0_7 = var_50
(*(*x0_7 + 0x38))(x0_7, *(arg1 + 0x28), *(arg1 + 0x30), *(arg1 + 0x38), *(arg1 + 0x40), 
    *(arg1 + 0x48), *(arg1 + 0x50))
int64_t* x0_8 = var_50
var_50 = nullptr

if (x0_8 != 0)
    (*(*x0_8 + 8))()

(*(*x20_1 + 8))(x20_1)
return 0
