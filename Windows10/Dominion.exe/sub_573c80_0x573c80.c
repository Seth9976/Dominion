// 函数: sub_573c80
// 地址: 0x573c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t* i_10
ecx, i_10 = __chkstk(0x10e4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t* i_8 = i_10
int32_t* i_9 = i_8

if (arg1 != 0)
    if (i_8 != 2)
        sub_572970(i_8, i_10, ecx, arg1, arg3)
    
    void* eax_2 = sub_571b30(arg1, ecx[0x352])
    int32_t ecx_2 = 0
    void* edx_1 = eax_2 + 0xa8
    
    while (true)
        int32_t esi_1 = *edx_1
        
        if (esi_1 != 0)
            if (esi_1 == 0xa)
                int32_t eax_10 = ecx_2 * 0xb4
                int32_t var_14_3 = ecx_2
                int32_t esi_5 = *(eax_10 + eax_2 + 0xbc)
                sub_572f80(eax_10, arg1, ecx, arg2, 0xffffffff)
                esi_5(i_9)
                TEB* fsbase
                void* ecx_10 = *fsbase->ThreadLocalStoragePointer
                int32_t eax_12 = *(ecx_10 + 0xf010)
                
                if (eax_12 s> 0)
                    *(ecx_10 + 0xf010) = eax_12 - 1
                    CookieCheckFunction(eax_12 - 1)
                    return eax_12 - 1
                
                sub_63b870(eax_12, &data_801800, "cs.numContexts > 0", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            ecx_2 += 1
            edx_1 += 0xb4
            
            if (ecx_2 s< 8)
                continue
        
        int32_t i_6 = 0
        void var_44c
        void* ebx_1 = &var_44c
        int32_t i = 0
        int32_t i_3 = 0
        void* eax_4 = sub_571b30(arg1, ecx[0x352]) + 0xbc
        
        do
            int32_t ecx_4 = *(eax_4 - 0x14)
            
            if (ecx_4 == 0)
                break
            
            if (ecx_4 == 0xb)
                __builtin_memcpy(ebx_1, eax_4, 0x88)
                i_6 = i_3 + 1
                ebx_1 += 0x88
                i_3 = i_6
            
            i += 1
            eax_4 += 0xb4
        while (i s< 8)
        
        int32_t* ebx_2 = ecx
        
        if (i_6 s<= 0)
            int32_t* i_5
            
            if ((*(sub_571b30(arg1, ebx_2[0x352]) + 0x98) & 8) == 0)
                i_5 = 0xa
            else
                int32_t ecx_19
                ecx_19.b = ebx_2[0x34e] != 2
                i_5 = (ecx_19 << 2) + 8
            
            i_8 = arg4
            
            if (i_8 != 0)
                i_5 = i_8
            
            int32_t* i_7 = i_5
            
            if (i_5 s> 0)
                int32_t* i_4 = i_5
                int32_t* i_1
                
                do
                    i_8 = sub_5727e0(i_8, arg1, ebx_2, i_9, 0xffffffff, nullptr)
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            break
        
        void var_3c8
        void* eax_5 = &var_3c8
        void* var_10d0_2 = &var_3c8
        int32_t i_2
        
        do
            int32_t ecx_5 = *(eax_5 - 4)
            void* esi_3 = nullptr
            int32_t edx_3 = 0
            int32_t var_10e0_1 = ecx_5
            int32_t var_10cc[0x320]
            
            if (ecx_5 s> 0)
                do
                    int32_t ebx_3 = *(eax_5 + (edx_3 << 3) - 0x80)
                    
                    if (ebx_3 s> 0)
                        int32_t ecx_7
                        int32_t edi_4
                        edi_4, ecx_7 =
                            __memfill_u32(&var_10cc[esi_3], *(eax_5 + (edx_3 << 3) - 0x84), ebx_3)
                        eax_5 = var_10d0_2
                        esi_3 += ebx_3
                        ecx_5 = var_10e0_1
                    
                    edx_3 += 1
                while (edx_3 s< ecx_5)
                
                ebx_2 = ecx
            
            if (*eax_5 != 0)
                sub_63eda0(eax_5, &var_10cc, ebx_2, esi_3, esi_3)
            
            void* ecx_14 = arg1
            int32_t* eax_9
            
            if (ecx_14 == 0x104)
                int32_t ecx_13 = ebx_2[0x34e]
                
                if (ecx_13 s< 5)
                    esi_3 = 0x3c
                
                eax_9 = (7 - *(arg2 + 0x48)) * ecx_13
                ecx_14 = arg1
                esi_3 -= eax_9
            else
                eax_9 = ecx_14 - 0x105
                
                if (ecx_14 != 0x105)
                    int32_t* temp3_1 = eax_9
                    eax_9 -= 1
                    
                    if (temp3_1 == 1 && ebx_2[0x34e] s< 5)
                        esi_3 = eax_9 + 0x1e
                else if (ebx_2[0x34e] s< 5)
                    esi_3 = 0x28
            
            int32_t edi_5 = 0
            
            if (esi_3 s> 0)
                do
                    void* edx_7 = var_10cc[edi_5]
                    
                    if (edx_7 == 0)
                        edx_7 = ecx_14
                    
                    eax_9 = sub_5727e0(eax_9, edx_7, ebx_2, i_9, 0xffffffff, nullptr)
                    ecx_14 = arg1
                    edi_5 += 1
                while (edi_5 s< esi_3)
            
            eax_5 = var_10d0_2 + 0x88
            i_2 = i_3
            i_3 -= 1
            var_10d0_2 = eax_5
        while (i_2 != 1)
        CookieCheckFunction(eax_5)
        return eax_5

CookieCheckFunction(i_8)
return i_8
