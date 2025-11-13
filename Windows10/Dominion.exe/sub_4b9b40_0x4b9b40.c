// 函数: sub_4b9b40
// 地址: 0x4b9b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* esi = arg1
int32_t result = 0
void* const i = &data_77fca8
void* var_40 = esi
int32_t result_1 = 0
void* const i_1 = &data_77fca8

do
    int32_t edi_1 = *i
    
    if (edi_1 == 0x13)
        if (sub_4dada0() != 0)
            result_1 += 1
            var_40 = &esi[1]
            *esi = zx.o(0)
            *esi = *i_1
            void* var_34
            void* var_1c
            uint32_t eax_3 = sub_4daf40(&var_34, &var_1c)
            int32_t esi_2 = 0
            
            if (eax_3 s> 0)
                do
                    if (sub_4db7a0(*(var_34 + (esi_2 << 2)), 0x1300) != 0)
                        *(esi + 4) |= 1
                        break
                    
                    esi_2 += 1
                while (esi_2 s< eax_3)
            
            void* var_2c
            void* var_18
            uint32_t eax_6 = sub_4daf40(&var_2c, &var_18)
            int32_t esi_3 = 0
            
            if (eax_6 s> 0)
                do
                    if (sub_4db7a0(*(var_2c + (esi_3 << 2)), 0x1304) != 0)
                        *(esi + 4) |= 2
                        break
                    
                    esi_3 += 1
                while (esi_3 s< eax_6)
            
            void* var_28
            void* var_14
            uint32_t eax_10 = sub_4daf40(&var_28, &var_14)
            int32_t esi_4 = 0
            
            if (eax_10 s> 0)
                do
                    if (sub_4db7a0(*(var_28 + (esi_4 << 2)), 0x1305) != 0)
                        *(esi + 4) |= 4
                        break
                    
                    esi_4 += 1
                while (esi_4 s< eax_10)
            
            void* var_24
            void* var_10
            uint32_t eax_14 = sub_4daf40(&var_24, &var_10)
            int32_t esi_5 = 0
            
            if (eax_14 s> 0)
                do
                    if (sub_4db7a0(*(var_24 + (esi_5 << 2)), 0x130e) != 0)
                        *(esi + 4) |= 8
                        break
                    
                    esi_5 += 1
                while (esi_5 s< eax_14)
            
            goto label_4b9c8a
        
        result = result_1
    else if (edi_1 == 2)
    label_4b9cfc:
        int128_t* edx_7 = esi
        result += 1
        result_1 = result
        esi = &esi[1]
        var_40 = esi
        *edx_7 = zx.o(0)
        *edx_7 = *i
        *(edx_7 + 4) = 0xffffffff
    else
        void* var_20
        void* var_c
        uint32_t eax_18 = sub_4daf40(&var_20, &var_c)
        int32_t esi_6 = 0
        
        if (eax_18 s> 0)
            while (true)
                if (sub_4db700(*(var_20 + (esi_6 << 2)), edi_1) != 0)
                    i = i_1
                    esi = var_40
                    result = result_1
                    break
                
                esi_6 += 1
                
                if (esi_6 s>= eax_18)
                    goto label_4b9c8a
            
            goto label_4b9cfc
        
    label_4b9c8a:
        esi = var_40
        result = result_1
    
    i = i_1 + 0x1c
    i_1 = i
while (i s< &data_77fea0)

return result
