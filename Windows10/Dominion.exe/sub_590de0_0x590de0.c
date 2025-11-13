// 函数: sub_590de0
// 地址: 0x590de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x2658)
__security_cookie
uint32_t arg_10
uint32_t eax_2 = arg_10
arg_10 = arg1

if (eax_2 != 0x12 && eax_2 != 0x13)
    sub_63b870(eax_2, &data_801800, "moveStyle == MOVE_TRASH || moveStyle == MOVE_TRASH_DISPLAY", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4b86, "TrashCards")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t eax_3 = arg2

if (eax_3 != 0)
    __return_addr = nullptr
    
    if (eax_3 s> 0)
        int32_t* edi_1 = edx
        uint32_t ecx_2 = arg1 - edi_1
        arg2 = ecx_2
        arg1 = eax_3
        int16_t arg_c0
        int32_t arg_d40[0x320]
        void* const __return_addr_1
        uint32_t i
        
        do
            eax_3 = sub_582de0(eax_3, *(edi_1 + ecx_2), ecx, *edi_1)
            __return_addr_1 = __return_addr
            
            if (eax_3.b == 0)
                int32_t ecx_4 = __return_addr_1 << 2
                __return_addr_1 += 1
                __return_addr = __return_addr_1
                *(&arg_c0 + ecx_4) = *(edi_1 + arg2)
                eax_3 = *edi_1
                arg_d40[__return_addr_1] = eax_3
            
            ecx_2 = arg2
            edi_1 = &edi_1[1]
            i = arg1
            arg1 -= 1
        while (i != 1)
        
        if (__return_addr_1 != 0)
            uint32_t eax_6 = zx.d(arg_c0)
            void* edi_2 = eax_6 * 0x64
            int32_t arg_18 = 2
            int32_t arg_28
            void* edi_3
            
            if (eax_6 u< 0x320)
                edi_3 = edi_2 + ecx
                arg_28 = *(edi_2 + ecx + 0x1a70)
            else
                sub_591930()
                edi_3 = edi_2 + ecx
                arg_28 = *(edi_2 + ecx + 0x1a70)
                sub_591930()
                __return_addr_1 = __return_addr
            
            int32_t ecx_5 = edx
            int32_t arg_24 = *(edi_3 + 0x1a50)
            int32_t arg_20 = ecx[0x67b]
            int128_t arg_68 = arg_18.o
            int128_t arg_78 = arg_28.o
            int128_t arg_88 = arg4
            int128_t arg_98 = arg5
            int64_t arg_a8 = arg6
            
            if (ecx_5 != 0xffffffff)
                arg1 = 0
                ecx[ecx_5 * 0x168c + 0x5d4f] += __return_addr_1
                int32_t edi_4 = 0
                uint32_t ecx_7
                
                do
                    uint32_t eax_13 = zx.d(*(arg_10 + (edi_4 << 2)))
                    arg2 = eax_13
                    
                    if (eax_13 u>= 0x320)
                        sub_591930()
                        eax_13 = arg2
                    
                    ecx_7 = arg1
                    
                    if (sub_5754f0(eax_13 * 0x64, ecx[eax_13 * 0x19 + 0x693], ecx, 4, 0) != 0)
                        ecx_7 += 1
                        arg1 = ecx_7
                    
                    edi_4 += 1
                while (edi_4 s< arg2)
                
                ecx_5 = edx
                
                if (ecx_7 != 0)
                    ecx[ecx_5 * 0x168c + 0x5d4e] |= 4
            
            int32_t eax_17 = ecx[0x541]
            
            if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx[0x540].b == 0)
                int32_t eax_18 = ecx_5
                
                if (ecx_5 == ecx[0x673])
                    eax_18 = ecx[0x674]
                
                sub_59f9b0(eax_18, ecx_5, ecx, eax_18, 0x34, 0, &arg_c0, __return_addr, 0, 0, 0, 0)
            
            if ((arg3 & 0x20) != 0)
                int32_t eax_19 = ecx[0x541]
                
                if (eax_19 != 3 && eax_19 != 5 && eax_19 != 4 && eax_19 != 6 && ecx[0x540].b == 0)
                    int32_t eax_20 = 0xffffffff
                    
                    if (ecx[0x673] == 0xffffffff)
                        eax_20 = ecx[0x674]
                    
                    sub_59f9b0(eax_20, 0xffffffff, ecx, eax_20, 0x3c, 0, nullptr, 0, 0, 0, 0, 0)
            
            ecx_5.b = 0
            int32_t edi_5 = 0
            var_4:3.b = 0
            
            if (__return_addr s> 0)
                do
                    int32_t var_1c_2 = arg_d40[edi_5]
                    arg_10 = 0
                    uint32_t eax_21 = *(&arg_c0 + (edi_5 << 2))
                    var_4:2.b = 0
                    char eax_22
                    eax_22, ecx_5 = sub_582de0(eax_21, eax_21, ecx, var_1c_2)
                    
                    if (eax_22 == 0)
                        int32_t arg_19c0
                        int32_t eax_24 = sub_590990(&arg_19c0, 0xffffffff, ecx, 5, &arg_19c0)
                        
                        if (eax_24 != 0)
                            if (eax_24 != 1)
                                sub_591930()
                            
                            eax_24 = arg_19c0
                        
                        if (eax_21 == eax_24)
                            sub_591930()
                        
                        sub_5822e0(&var_4:2, 0xffffffff, ecx, eax_21, arg_10, 2, nullptr, 0, 0, 0, 
                            0, 0, &var_4:2, 0, nullptr, arg_10)
                    
                    ecx_5.b = var_4:3.b
                    edi_5 += 1
                    ecx_5.b |= var_4:2.b
                    var_4:3.b = ecx_5.b
                while (edi_5 s< __return_addr)
            
            arg_10 = 5
            arg3.d = 0x13
            int32_t eax_26
            eax_26.b = ecx_5.b != 0
            sub_580700(ecx, &arg_10, eax_26 + 1, &arg_68, 0, &arg_c0, __return_addr, nullptr)
            sub_583350(ecx)
            CookieCheckFunction(__return_addr)
            return __return_addr

CookieCheckFunction(0)
return 0
