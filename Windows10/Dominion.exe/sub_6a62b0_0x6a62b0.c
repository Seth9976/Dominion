// 函数: sub_6a62b0
// 地址: 0x6a62b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetDefaultScheduler@SchedulerBase@details@Concurrency@@CAPAV123@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_147ac64
char** esi = arg1
int32_t* i_1 = ebx[1]
int32_t i_2 = ebx[2] * 0x18
int32_t i_3 = i_2

if (i_1 != 0)
    int32_t* i
    
    do
        i = *i_1
        void* edx_1 = &i_1[1]
        i_2 = i_1
        i_1 = i
        
        if (esi u>= edx_1)
            i_2 += i_3 + 4
            esi = arg1
            
            if (esi u< i_2)
                int32_t eax_7
                int32_t edx_2
                edx_2:eax_7 = sx.q(esi - edx_1)
                i_2 = divs.dp.d(edx_2:eax_7, 0x18)
                
                if (mods.dp.d(edx_2:eax_7, 0x18) == 0)
                    ebx[3] -= 1
                    int32_t var_8_1 = 0
                    
                    if (data_cf65bc != 0)
                        char* eax_8 = esi[2]
                        
                        if (eax_8 != 0 && *eax_8 != 0)
                            char* eax_9 = sub_63d4e0(&esi[2])
                            int32_t temp2_1 = *(eax_9 + 4)
                            *(eax_9 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                                esi[2] = &data_801800
                    
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_10 = esi[1]
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_63d4e0(&esi[1])
                            int32_t temp3_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                                esi[1] = &data_801800
                    
                    int32_t var_8_3 = 2
                    
                    if (data_cf65bc != 0)
                        char* eax_12 = *esi
                        
                        if (eax_12 != 0 && *eax_12 != 0)
                            char* eax_13 = sub_63d4e0(esi)
                            int32_t temp4_1 = *(eax_13 + 4)
                            *(eax_13 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                                *esi = &data_801800
                    
                    char* result = *ebx
                    *esi = result
                    *ebx = esi
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
    while (i != 0)

sub_63b870(i_2, &data_801800, "IsPointerFromAllocator(pItem)", "C:\x\ax2017\Engine\xAlloc.h", 
    0x112, "XTypedAllocator<struct DefParseItem>::Free")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
