// 函数: sub_56dc10
// 地址: 0x56dc10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x2628)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
int32_t* ecx_1 = ecx
int32_t var_d20 = 0
int32_t* var_ca4 = ecx_1
int32_t eax_3 = *(sub_573400() + 4)
void* eax_5 = &ecx[ecx[0x320]]
int32_t var_19a0[0x21]

if (ecx != eax_5)
    do
        int32_t esi_1 = *ecx_1
        uint32_t esi_2 = zx.d(esi_1.w)
        int32_t edi_1 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t eax_8 = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
        int32_t (* edi_2)[0x21] = &var_19a0
        void* ebx_1 = &var_19a0[ebx]
        
        if (&var_19a0 != ebx_1)
            int32_t ecx_2 = eax_8
            int32_t edx_1 = eax_3
            
            do
                uint32_t esi_4 = zx.d((*edi_2).w)
                
                if (esi_4 u>= 0x320)
                    sub_591930()
                    ecx_2 = eax_8
                    edx_1 = eax_3
                
                if (*(esi_4 * 0x64 + edx_1 + 0x1a4c) == ecx_2)
                    ebx = var_d20
                    goto label_56dd28
                
                edi_2 = &(*edi_2)[1]
            while (edi_2 != ebx_1)
        
        if (var_d20 s>= 0x320)
            sub_591930()
        
        *ebx_1 = esi_1
        ebx = var_d20 + 1
        var_d20 = ebx
    label_56dd28:
        ecx_1 = &var_ca4[1]
        var_ca4 = ecx_1
    while (ecx_1 != eax_5)

int32_t* var_ce4 = ecx
int32_t var_14 = 0
void var_c98
__builtin_memcpy(&var_c98, &var_19a0, 0xc84)
int32_t edx_2 = 3
int32_t ecx_4 = edx
int64_t var_cc0 = 0
int64_t var_cd0 = 0

if (ebx s< ecx_4)
    ecx_4 = ebx

int64_t var_cc8 = 0
int32_t var_cdc = ecx[0x320]
char var_18 = 0
int32_t var_ce0 = 0

if (ebx s< 3)
    edx_2 = ebx

int128_t var_d18
int128_t* var_20 = &var_d18
var_d18 = arg4.o
int32_t var_cd4 = 0
int128_t var_d08 = 0.o
int128_t var_cf8 = var_cc8.o
void var_2628
__builtin_memcpy(arg2, 
    sub_563960(&var_2628, ecx_4, &var_c98, &var_2628, edx_2, arg3, var_20, arg5, var_18, var_14), 
    0xc84)
CookieCheckFunction(arg2)
return arg2
