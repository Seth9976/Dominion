// 函数: sub_69ed20
// 地址: 0x69ed20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f1c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_69ec60(arg1)
char* eax_3 = arg1[8]
char* const ecx = &data_801800
int32_t* ebx = data_147ac2c

if (eax_3 != 0)
    ecx = eax_3

int32_t eax_4 = sub_69c4d0(ecx, 0)
int32_t ecx_2 = ebx[1] & eax_4
int32_t eax_5 = *ebx
char** i = *(eax_5 + (ecx_2 << 2))
char** i_2 = nullptr
char** i_4

for (; i != 0; i = i_4)
    i_4 = i[2]
    
    if (sub_63d7f0(&arg1[8], i) == 0)
        if (i_2 != 0)
            i_2[2] = i_4
        else
            *(eax_5 + (ecx_2 << 2)) = i_4
        
        int32_t var_8_1 = 0
        
        if (data_cf65bc != 0)
            char* eax_10 = *i
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(i)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    *i = &data_801800
        
        int32_t var_8_2 = 0xffffffff
        sub_64c080(i, 0xc)
        ebx[2] -= 1
        break
    
    i_2 = i

void* ebx_1 = data_147ac2c
int32_t* i_3 = *(ebx_1 + 0x10)
int32_t i_5 = *(ebx_1 + 0x14) * 0x24
int32_t i_6 = i_5

if (i_3 != 0)
    int32_t* i_1
    
    do
        i_1 = *i_3
        void* edx_3 = &i_3[1]
        i_5 = i_3
        i_3 = i_1
        
        if (arg1 u>= edx_3)
            i_5 += i_6 + 4
            void* ebx_4 = data_147ac2c
            
            if (arg1 u< i_5)
                int32_t eax_17
                int32_t edx_4
                edx_4:eax_17 = sx.q(arg1 - edx_3)
                i_5 = divs.dp.d(edx_4:eax_17, 0x24)
                
                if (mods.dp.d(edx_4:eax_17, 0x24) == 0)
                    *(ebx_4 + 0x18) -= 1
                    int32_t var_8_3 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_18 = arg1[8]
                        
                        if (eax_18 != 0 && *eax_18 != 0)
                            char* eax_19 = sub_63d4e0(&arg1[8])
                            int32_t temp3_1 = *(eax_19 + 4)
                            *(eax_19 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                                arg1[8] = &data_801800
                    
                    int32_t var_8_4 = 2
                    
                    if (data_cf65bc != 0)
                        char* eax_20 = arg1[3]
                        
                        if (eax_20 != 0 && *eax_20 != 0)
                            char* eax_21 = sub_63d4e0(&arg1[3])
                            int32_t temp4_1 = *(eax_21 + 4)
                            *(eax_21 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                                arg1[3] = &data_801800
                    
                    int32_t result = *(ebx_4 + 0xc)
                    *arg1 = result
                    *(ebx_4 + 0xc) = arg1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
    while (i_1 != 0)

sub_63b870(i_5, &data_801800, "IsPointerFromAllocator(pItem)", "C:\x\ax2017\Engine\xAlloc.h", 
    0x112, "XTypedAllocator<struct XAsset>::Free")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
