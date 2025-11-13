// 函数: sub_69d970
// 地址: 0x69d970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg3
void* result = arg2

if (arg3 != 0)
    if (arg3[4] - 1 u> 0x10)
        for (int32_t* i = *arg4; i != 0; i = i[1])
            if (*i == arg3)
                return result
        
        int32_t* eax_7 = sub_64bfd0(0xc)
        eax_7[3] += 1
        
        if (*eax_7 == 0)
            sub_64be70(eax_7)
        
        int32_t* ecx_2 = *eax_7
        *eax_7 = *ecx_2
        ecx_2[2] = 0
        *ecx_2 = arg3
        ecx_2[1] = 0
        ecx_2[2] = arg4[1]
        void* eax_10 = arg4[1]
        
        if (eax_10 == 0)
            *arg4 = ecx_2
        else
            *(eax_10 + 4) = ecx_2
        
        arg4[2] += 1
        void* ebx_2 = &arg3[3]
        arg4[1] = ecx_2
        
        if (arg5 != 0)
            int32_t var_1c_1 = *ebx_2
            int32_t var_20_1 = *arg3
            sub_63b5f0("      def %s size %d")
        
        int32_t i_8 = 4
        int32_t i_1
        
        do
            char eax_11 = *ebx_2
            ebx_2 += 1
            result = result u>> 8 ^ *(((zx.d(eax_11) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
        void* ecx_3 = &arg3[6]
        int32_t i_10 = 4
        int32_t i_2
        
        do
            char eax_14 = *ecx_3
            ecx_3 += 1
            result = result u>> 8 ^ *(((zx.d(eax_14) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
        void* ecx_4 = &arg3[7]
        int32_t i_11 = 4
        int32_t i_3
        
        do
            char eax_17 = *ecx_4
            ecx_4 += 1
            result = result u>> 8 ^ *(((zx.d(eax_17) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_3 = i_11
            i_11 -= 1
        while (i_3 != 1)
        char* edx_2 = *arg3
        char* ecx_5 = edx_2
        void* ebx_3 = &ecx_5[1]
        uint32_t eax_19
        
        do
            eax_19.b = *ecx_5
            ecx_5 = &ecx_5[1]
        while (eax_19.b != 0)
        void* i_9 = ecx_5 - ebx_3
        
        if (ecx_5 != ebx_3)
            void* i_4
            
            do
                char eax_20 = *edx_2
                edx_2 = &edx_2[1]
                result = result u>> 8 ^ *(((zx.d(eax_20) ^ zx.d(result.b)) << 2) + &data_7ffd70)
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        if (arg3[2] != 0)
            for (int32_t i_5 = 0; i_5 != 0xffffffff; )
                int32_t ecx_8 = i_5 * 0xf
                i_5 += 1
                
                if (i_5 s>= arg3[2])
                    i_5 = 0xffffffff
                
                int32_t* eax_24 = arg3[1] + (ecx_8 << 2)
                result = sub_69d750(eax_24, result, eax_24, arg4, arg5)
                
                if (arg5 != 0)
                    void* result_1 = result
                    int32_t var_20_3 = eax_24[1]
                    int32_t var_24_1 = *arg3
                    sub_63b5f0("      def %s field %s %x")
    else
        char* edx = *arg3
        char* ecx = edx
        void* edi_1 = &ecx[1]
        int32_t eax_1
        
        do
            eax_1.b = *ecx
            ecx = &ecx[1]
        while (eax_1.b != 0)
        void* i_7 = ecx - edi_1
        
        if (ecx != edi_1)
            void* i_6
            
            do
                char eax_2 = *edx
                edx = &edx[1]
                result = result u>> 8 ^ *(((zx.d(eax_2) ^ zx.d(result.b)) << 2) + &data_7ffd70)
                i_6 = i_7
                i_7 -= 1
            while (i_6 != 1)

return result
