// 函数: sub_6053f0
// 地址: 0x6053f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* result = data_b7fcd0

if (result != 0)
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u< data_b809e4)
        void* esi_2 = ecx * 0x1c30 + data_b809e0
        
        if (*(esi_2 + 0x1c28) == result && esi_2 != 0)
            int32_t ecx_1
            int32_t edi_1
            
            if (sub_6053a0() == 0)
                int32_t eax_1 = sub_4dad50()
                ecx_1 = data_b80b08
                
                if (eax_1 != 2)
                    if (data_b80afc == 1 && data_b80b54 s> 1)
                        edi_1 = 2
                    
                    if (data_b80afc != 1 || data_b80b54 s<= 1 || ecx_1 == 2)
                        edi_1 = 3
                else
                    edi_1 = 0
            else
                ecx_1 = data_b80b08
                edi_1 = 1
            
            int32_t eax_2 = data_b80b00
            int32_t edx_1 = 0
            int32_t var_8_1
            
            if (eax_2 == 0xc)
                var_8_1 = 6
            else if (eax_2 == 0xe)
                var_8_1 = 1
            else if (eax_2 == 0x10)
                var_8_1 = 1
            else if (eax_2 != 9)
                if (eax_2 == 0x17)
                    edx_1 = 1
                
                var_8_1 = edx_1
            else
                var_8_1 = 1
            
            if ((ecx_1 == 2 || ecx_1 == 3) && *(esi_2 + 0x2c) == 0 && *(esi_2 + 0xa4) == 0x3ea)
                result = 4
            else if (ecx_1 == 0x2c || ecx_1 == 0x2d)
                if (*(esi_2 + 0x2c) != 0 || *(esi_2 + 0xa4) != 2)
                    result = 1
                else
                    result = nullptr
            else if (data_b80afc != 8)
                if (eax_2 u> 0x22)
                    sub_63b870(eax_2, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x9a9b, "CalcDragColor")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                switch (eax_2)
                    case 0, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x1c, 0x1d, 0x1e, 0x1f, 
                            0x20, 0x21
                        result = 3
                    case 1, 2, 3, 4, 0x22
                        result = 4
                    case 5, 6, 7, 8
                        result = nullptr
                    case 9, 0xa, 0xb
                        result = 1
                    case 0xc, 0xd, 0xe, 0x17, 0x18, 0x19, 0x1a, 0x1b
                        result = 2
            else
                result = 3
            
            if (edi_1 != 0 && edi_1 != 1)
                void** esi_3
                
                switch (result)
                    case nullptr
                        esi_3 = &data_be4f60
                    case 1
                        esi_3 = &data_be4f84
                    case 2
                        esi_3 = &data_be4f90
                    case 3
                        esi_3 = &data_be4f6c
                    case 4
                        esi_3 = &data_be4f78
                
                uint32_t eax_4 = sub_64e7a0(arg1)
                sub_665db0(eax_4, esi_3, eax_4, 0x3f800000, 0xffffffff, 0)
                int32_t eax_6 = *(sub_5cba00(data_b7fcd0) + 0xa4)
                int32_t esi_4
                
                if (eax_6 == 0x3e9)
                    esi_4 = 0
                else if (eax_6 == 0x3ea)
                    esi_4 = 1
                else
                    esi_4 = 6
                
                uint32_t eax_9 = sub_64e7a0(arg1)
                sub_665db0(eax_9, &data_be4f00, eax_9, 0x3f800000, 0xffffffff, 0)
                void** eax_11
                uint32_t eax_12
                void** ebx_1
                bool cond:1_1
                
                switch (var_8_1)
                    case 0
                        if (esi_4 == 0)
                            goto label_605618
                        
                        ebx_1 = &data_be4f30
                        eax_11 = &data_be4f3c
                        cond:1_1 = esi_4 != 6
                    case 1
                        if (esi_4 == 0)
                        label_605618:
                            eax_12 = sub_64e7a0(arg1)
                            return sub_665db0(eax_12, &data_be4f0c, eax_12, 0x3f800000, 0xffffffff, 
                                0)
                        
                        ebx_1 = &data_be4f3c
                        eax_11 = &data_be4f30
                        cond:1_1 = esi_4 != 1
                    case 6
                        uint32_t eax_14 = sub_64e7a0(arg1)
                        void** edx_4 = &data_be4f48
                        
                        if (esi_4 == 0)
                            edx_4 = &data_be4f18
                        
                        return sub_665db0(eax_14, edx_4, eax_14, 0x3f800000, 0xffffffff, 0)
                
                if (not(cond:1_1))
                    eax_12 = sub_64e7a0(arg1)
                    return sub_665db0(eax_12, ebx_1, eax_12, 0x3f800000, 0xffffffff, 0)
                
                eax_12 = sub_64e7a0(arg1)
                return sub_665db0(eax_12, eax_11, eax_12, 0x3f800000, 0xffffffff, 0)
            
            if (ecx_1 == 0x33)
                uint32_t eax_16 = sub_64e7a0(arg1)
                sub_665db0(eax_16, &data_be4f30, eax_16, 0x3f800000, 0xffffffff, 0)
                uint32_t eax_17 = sub_64e7a0(arg1)
                return sub_665db0(eax_17, &data_be4f54, eax_17, 0x3f800000, 0xffffffff, 0)

return result
