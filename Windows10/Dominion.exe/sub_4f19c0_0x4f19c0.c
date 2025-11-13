// 函数: sub_4f19c0
// 地址: 0x4f19c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char var_6 = 0
void* esi = arg1
int32_t i_4 = *(arg2 + 0x6c)
void* result = arg2 + 0x70
void* var_c = esi
char var_5 = 1

if (i_4 s> 0)
    void* result_1 = result
    int32_t i_2 = i_4
    int32_t i
    
    do
        int32_t eax = *result_1 * 0x64
        
        if (*(eax + esi + 0x1a50) == 0x3ea)
            int32_t eax_1 = *(eax + esi + 0x1a4c)
            bool cond:8_1
            
            if (eax_1 s> 0xb00)
                if (eax_1 s> 0xd24)
                    if (eax_1 s> 0xf02)
                        if (eax_1 s> 0x112a)
                            cond:8_1 = eax_1 == 0x1309
                        label_4f1b34:
                            
                            if (not(cond:8_1))
                                var_6 = 1
                        else if (eax_1 != 0x112a && eax_1 != 0x1103)
                            cond:8_1 = eax_1 == 0x1114
                            goto label_4f1b34
                    else if (eax_1 != 0xf02)
                        if (eax_1 - 0xd25 u> 0xf0)
                            var_6 = 1
                        else
                            switch (eax_1)
                                case 0xd28, 0xd29, 0xd2a, 0xd2b, 0xd2c, 0xd2d, 0xd2e, 0xd2f, 0xd30, 
                                        0xd31, 0xd32, 0xd33, 0xd34, 0xd35, 0xd36, 0xd37, 0xd38, 
                                        0xd39, 0xd3a, 0xd3b, 0xd3c, 0xd3d, 0xd3e, 0xd3f, 0xd40, 
                                        0xd41, 0xd42, 0xd43, 0xd44, 0xd45, 0xd46, 0xd47, 0xd48, 
                                        0xd49, 0xd4a, 0xd4b, 0xd4c, 0xd4d, 0xd4e, 0xd4f, 0xd50, 
                                        0xd51, 0xd52, 0xd53, 0xd54, 0xd55, 0xd56, 0xd57, 0xd58, 
                                        0xd59, 0xd5a, 0xd5b, 0xd5c, 0xd5d, 0xd5e, 0xd5f, 0xd60, 
                                        0xd61, 0xd62, 0xd63, 0xd64, 0xd65, 0xd66, 0xd67, 0xd68, 
                                        0xd69, 0xd6a, 0xd6b, 0xd6c, 0xd6d, 0xd6e, 0xd6f, 0xd70, 
                                        0xd71, 0xd72, 0xd73, 0xd74, 0xd75, 0xd76, 0xd77, 0xd78, 
                                        0xd79, 0xd7a, 0xd7b, 0xd7c, 0xd7d, 0xd7e, 0xd7f, 0xd80, 
                                        0xd81, 0xd82, 0xd83, 0xd84, 0xd85, 0xd86, 0xd87, 0xd88, 
                                        0xd89, 0xd8a, 0xd8b, 0xd8c, 0xd8d, 0xd8e, 0xd8f, 0xd90, 
                                        0xd91, 0xd92, 0xd93, 0xd94, 0xd95, 0xd96, 0xd97, 0xd98, 
                                        0xd99, 0xd9a, 0xd9b, 0xd9c, 0xd9d, 0xd9e, 0xd9f, 0xda0, 
                                        0xda1, 0xda2, 0xda3, 0xda4, 0xda5, 0xda6, 0xda7, 0xda8, 
                                        0xda9, 0xdaa, 0xdab, 0xdac, 0xdad, 0xdae, 0xdaf, 0xdb0, 
                                        0xdb1, 0xdb2, 0xdb3, 0xdb4, 0xdb5, 0xdb6, 0xdb7, 0xdb8, 
                                        0xdb9, 0xdba, 0xdbb, 0xdbc, 0xdbd, 0xdbe, 0xdbf, 0xdc0, 
                                        0xdc1, 0xdc2, 0xdc3, 0xdc4, 0xdc5, 0xdc6, 0xdc7, 0xdc8, 
                                        0xdc9, 0xdca, 0xdcb, 0xdcc, 0xdcd, 0xdce, 0xdcf, 0xdd0, 
                                        0xdd1, 0xdd2, 0xdd3, 0xdd4, 0xdd5, 0xdd6, 0xdd7, 0xdd8, 
                                        0xdd9, 0xdda, 0xddb, 0xddc, 0xddd, 0xdde, 0xddf, 0xde0, 
                                        0xde1, 0xde2, 0xde3, 0xde4, 0xde5, 0xde6, 0xde7, 0xde8, 
                                        0xde9, 0xdea, 0xdeb, 0xdec, 0xded, 0xdee, 0xdef, 0xdf0, 
                                        0xdf1, 0xdf2, 0xdf3, 0xdf4, 0xdf5, 0xdf6, 0xdf7, 0xdf8, 
                                        0xdf9, 0xdfa, 0xdfb, 0xdfc, 0xdfd, 0xdfe, 0xdff, 0xe00, 
                                        0xe02, 0xe03, 0xe04, 0xe05, 0xe06, 0xe07, 0xe08, 0xe09, 
                                        0xe0a, 0xe0b, 0xe0c, 0xe0d, 0xe0e, 0xe0f, 0xe10, 0xe11, 
                                        0xe12, 0xe13, 0xe14
                                    var_6 = 1
                else if (eax_1 != 0xd24)
                    if (eax_1 s> 0xc16)
                        if (eax_1 != 0xc2a)
                            cond:8_1 = eax_1 == 0xd21
                            goto label_4f1b34
                    else if (eax_1 != 0xc16 && eax_1 != 0xb17 && eax_1 != 0xc05)
                        cond:8_1 = eax_1 == 0xc0c
                        goto label_4f1b34
            else if (eax_1 != 0xb00)
                if (eax_1 s> 0x607)
                    if (eax_1 s> 0x70f)
                        if (eax_1 != 0x80e && eax_1 != 0x92e)
                            cond:8_1 = eax_1 == 0xa03
                            goto label_4f1b34
                    else if (eax_1 != 0x70f)
                        if (eax_1 - 0x608 u> 0x18)
                            var_6 = 1
                        else
                            switch (eax_1)
                                case 0x609, 0x60a, 0x60b, 0x60c, 0x60d, 0x60e, 0x60f, 0x611, 0x612, 
                                        0x613, 0x614, 0x616, 0x617, 0x618, 0x619, 0x61a, 0x61b, 
                                        0x61c, 0x61d, 0x61e, 0x61f
                                    var_6 = 1
                else if (eax_1 != 0x607)
                    if (eax_1 s> 0x318)
                        if (eax_1 s> 0x509)
                            cond:8_1 = eax_1 == 0x600
                            goto label_4f1b34
                        
                        if (eax_1 != 0x509 && eax_1 != 0x41a)
                            cond:8_1 = eax_1 == 0x500
                            goto label_4f1b34
                    else if (eax_1 != 0x318)
                        if (eax_1 - 0x100 u> 6)
                            var_6 = 1
                        else
                            switch (eax_1)
                                case 0x101, 0x102, 0x103
                                    var_6 = 1
        
        result_1 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)
    result = arg2 + 0x70

int32_t edx = i_4 - 1

if (edx s>= 0)
    void* ecx_1 = arg2 + 0x70 + (edx << 2)
    int32_t temp1_1
    
    do
        int32_t eax_14 = *(*ecx_1 * 0x64 + esi + 0x1a50)
        
        if (eax_14 != 0x3ea && eax_14 != 0x3eb)
            *(arg2 + 0x6c) -= 1
            *ecx_1 = *(arg2 + (*(arg2 + 0x6c) << 2) + 0x70)
        
        ecx_1 -= 4
        temp1_1 = edx
        edx -= 1
    while (temp1_1 - 1 s>= 0)
    result = arg2 + 0x70

int32_t edi = *(arg2 + 0x6c)

if (edi s> 1)
    int32_t ebx_1 = *(*result * 0x64 + esi + 0x1a4c)
    result.b = 1
    void* esi_2 = arg2 + 0x74
    int32_t i_3 = edi - 1
    int32_t i_1
    
    do
        int32_t ecx_2 = *esi_2 * 0x64
        esi_2 += 4
        char edx_1 = 0
        
        if (*(ecx_2 + var_c + 0x1a4c) == ebx_1)
            edx_1 = result.b
        
        result.b = edx_1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    esi = var_c
    var_5 = result.b

if (var_6 != 0)
    *(arg2 + 0x5c) = 1

int32_t esi_3 = *(esi + 0x19b8)
int32_t edx_2 = 0
int32_t edi_1 = *(arg2 + 0x4c)

if (esi_3 s> 0)
    result = var_c + 0x3b5b8
    
    while (true)
        if (*(result - 4) == 2 && *result == 9)
            int32_t ecx_3 = *(result - 0x3c)
            
            if (ecx_3 == edi_1 || ecx_3 == 0xffffffff)
                int32_t ecx_4 = *(result + 0x34)
                
                if (ecx_4 == 0x21)
                label_4f1c48:
                    
                    if (var_5 != 0)
                        break
                    
                    *(arg2 + 0x5c) = 1
                    break
                
                if (ecx_4 == 0x54)
                    result = edi_1 * 0x5a30
                    
                    if (*(result + var_c + 0x1752c) != 0)
                        break
                    
                    goto label_4f1c48
        
        edx_2 += 1
        result += 0xa8
        
        if (edx_2 s>= esi_3)
            return result

return result
