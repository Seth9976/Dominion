// 函数: sub_52b670
// 地址: 0x52b670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x1998)
void var_10
void arg_70
int32_t eax_3 =
    sub_568780(&arg_70, sub_561af0(__security_cookie ^ &var_10, 0, 2, 0), 0x3ea, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x93.o
char var_1c_2 = 0
int32_t* arg_cf8
__builtin_memcpy(&arg_cf8, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* eax_4 = sub_563c40(&arg_38, 0x11, var_1c_2)
int32_t* edi = eax_4
var_4 = nullptr
int32_t* var_8 = edi

if (edi != 0)
    sub_5669b0(eax_4, 0x3ef, edi, 1)
    void* eax_5 = sub_573400()
    int32_t temp1_1 = mods.dp.d(sx.q(*(eax_5 + 0xc) + 1), *(*(eax_5 + 4) + 0xd38))
    int32_t** var_3c_1 = &var_8
    int32_t* var_40 = &std::_Func_impl_no_alloc<class <lambda_b42fb8b485a5ca657e954dcd0ee2a16a>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t* var_38_1 = &var_4
    int32_t** var_1c_4 = &var_40
    sub_5698b0(&var_40, temp1_1, temp1_1, var_40)
    int32_t eax_12 = *(*(sub_573400() + 4) + 0x1504)
    
    if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6)
        void* var_38_2
        __builtin_memset(&var_38_2, 0, 0x20)
        int32_t* var_3c_2 = 1
        var_40 = nullptr
        void* var_34
        int128_t* var_30
        int32_t var_2c
        int32_t var_28
        int32_t var_24_1
        int32_t var_20_1
        int32_t var_1c_5
        sub_61b1b0(eax_12, 7, eax_12 == 2, 0xffffffff, var_40, var_3c_2, var_38_2, var_34, var_30, 
            var_2c, var_28, var_24_1, var_20_1, var_1c_5)
    
    edi = var_8

void* eax_13 = sub_573400()
void arg_cfc
int32_t eax_14 = memset(&arg_cfc, 0, 0xc80)
int32_t* ecx_5 = *(eax_13 + 4)
arg3 += 1
arg_cf8 = edi
sub_579750(eax_14, &arg_cf8, ecx_5, 0x3ea)
int32_t* esi_2 = var_4
void* eax_15 = sub_573400()
int32_t eax_16 = memset(&arg_cfc, 0, 0xc80)
int32_t* ecx_6 = *(eax_15 + 4)
arg3 += 1
arg_cf8 = esi_2
sub_579750(eax_16, &arg_cf8, ecx_6, 0x3ea)
uint32_t eax_18

if (var_4 != 0)
    eax_18 = sub_56e9c0(nullptr)
else
    sub_561af0(sub_56e9c0(1), 0, 1, 0)
    eax_18 = sub_563590(0xc10)
    uint32_t edi_2 = eax_18
    
    if (edi_2 != 0)
        uint32_t esi_3 = zx.d(edi_2.w)
        void* eax_20 = *(sub_573400() + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        eax_18 = esi_3 * 0x64
        
        if (*(eax_18 + eax_20 + 0x1a4c) == 0xc10)
            void* eax_22 = *(sub_573400() + 4)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            void* eax_23 = sub_562400(eax_22, *(eax_18 + eax_22 + 0x1a50), edi_2, 0)
            CookieCheckFunction(eax_23)
            return eax_23

CookieCheckFunction(eax_18)
return eax_18
