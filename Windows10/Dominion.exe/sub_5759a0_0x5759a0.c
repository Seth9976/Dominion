// 函数: sub_5759a0
// 地址: 0x5759a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
uint32_t esi = zx.d(arg2)

if (esi u>= 0x320)
    sub_591930()

uint32_t result = *(esi * 0x64 + arg3 + 0x1a4c)
bool cond:9_1

if (result s<= 0xc05)
    if (result == 0xc05)
        result.b = 1
        return result
    
    if (result s<= 0x607)
        if (result == 0x607)
            result.b = 1
            return result
        
        if (result s<= 0x318)
            if (result == 0x318)
                result.b = 1
                return result
            
            if (result - 0x100 u> 6)
                result.b = 0
                return result
            
            bool cond:12_1
            
            switch (result)
                case 0x100
                    result.b = 1
                    return result
                case 0x101, 0x102, 0x103
                    result.b = 0
                    return result
                case 0x104
                    cond:12_1 = (arg4 & 4) != 0
                case 0x105, 0x106
                    cond:12_1 = (arg4 & 8) != 0
            
            if (cond:12_1)
                result.b = 0
                return result
            
            result.b = 1
            return result
        
        if (result s> 0x509)
            cond:9_1 = result == 0x600
        else
            if (result == 0x509 || result == 0x41a)
                result.b = 1
                return result
            
            cond:9_1 = result == 0x500
    else if (result s<= 0x802)
        if (result == 0x802)
            result.b = 1
            return result
        
        if (result s<= 0x620)
            if (result == 0x620)
                result.b = 1
                return result
            
            if (result == 0x610)
                result.b = 1
                return result
            
            if (result != 0x61b || (arg4 & 3) != 0)
                result.b = 0
                return result
            
            result.b = 1
            return result
        
        cond:9_1 = result == 0x70f
    else if (result s> 0xa03)
        cond:9_1 = result == 0xb17
    else
        if (result == 0xa03)
            result.b = 1
            return result
        
        if (result == 0x80e)
            result.b = 1
            return result
        
        cond:9_1 = result == 0x81f
else if (result s<= 0x1102)
    if (result == 0x1102)
        result.b = 1
        return result
    
    if (result s> 0xd21)
        if (result - 0xd22 u> 0xf3)
            result.b = 0
            return result
        
        switch (result)
            case 0xd22, 0xd24, 0xd25, 0xe01, 0xe15
                result.b = 1
                return result
            case 0xd23, 0xd26, 0xd27, 0xd28, 0xd29, 0xd2a, 0xd2b, 0xd2c, 0xd2d, 0xd2e, 0xd2f, 
                    0xd30, 0xd31, 0xd32, 0xd33, 0xd34, 0xd35, 0xd36, 0xd37, 0xd38, 0xd39, 0xd3a, 
                    0xd3b, 0xd3c, 0xd3d, 0xd3e, 0xd3f, 0xd40, 0xd41, 0xd42, 0xd43, 0xd44, 0xd45, 
                    0xd46, 0xd47, 0xd48, 0xd49, 0xd4a, 0xd4b, 0xd4c, 0xd4d, 0xd4e, 0xd4f, 0xd50, 
                    0xd51, 0xd52, 0xd53, 0xd54, 0xd55, 0xd56, 0xd57, 0xd58, 0xd59, 0xd5a, 0xd5b, 
                    0xd5c, 0xd5d, 0xd5e, 0xd5f, 0xd60, 0xd61, 0xd62, 0xd63, 0xd64, 0xd65, 0xd66, 
                    0xd67, 0xd68, 0xd69, 0xd6a, 0xd6b, 0xd6c, 0xd6d, 0xd6e, 0xd6f, 0xd70, 0xd71, 
                    0xd72, 0xd73, 0xd74, 0xd75, 0xd76, 0xd77, 0xd78, 0xd79, 0xd7a, 0xd7b, 0xd7c, 
                    0xd7d, 0xd7e, 0xd7f, 0xd80, 0xd81, 0xd82, 0xd83, 0xd84, 0xd85, 0xd86, 0xd87, 
                    0xd88, 0xd89, 0xd8a, 0xd8b, 0xd8c, 0xd8d, 0xd8e, 0xd8f, 0xd90, 0xd91, 0xd92, 
                    0xd93, 0xd94, 0xd95, 0xd96, 0xd97, 0xd98, 0xd99, 0xd9a, 0xd9b, 0xd9c, 0xd9d, 
                    0xd9e, 0xd9f, 0xda0, 0xda1, 0xda2, 0xda3, 0xda4, 0xda5, 0xda6, 0xda7, 0xda8, 
                    0xda9, 0xdaa, 0xdab, 0xdac, 0xdad, 0xdae, 0xdaf, 0xdb0, 0xdb1, 0xdb2, 0xdb3, 
                    0xdb4, 0xdb5, 0xdb6, 0xdb7, 0xdb8, 0xdb9, 0xdba, 0xdbb, 0xdbc, 0xdbd, 0xdbe, 
                    0xdbf, 0xdc0, 0xdc1, 0xdc2, 0xdc3, 0xdc4, 0xdc5, 0xdc6, 0xdc7, 0xdc8, 0xdc9, 
                    0xdca, 0xdcb, 0xdcc, 0xdcd, 0xdce, 0xdcf, 0xdd0, 0xdd1, 0xdd2, 0xdd3, 0xdd4, 
                    0xdd5, 0xdd6, 0xdd7, 0xdd8, 0xdd9, 0xdda, 0xddb, 0xddc, 0xddd, 0xdde, 0xddf, 
                    0xde0, 0xde1, 0xde2, 0xde3, 0xde4, 0xde5, 0xde6, 0xde7, 0xde8, 0xde9, 0xdea, 
                    0xdeb, 0xdec, 0xded, 0xdee, 0xdef, 0xdf0, 0xdf1, 0xdf2, 0xdf3, 0xdf4, 0xdf5, 
                    0xdf6, 0xdf7, 0xdf8, 0xdf9, 0xdfa, 0xdfb, 0xdfc, 0xdfd, 0xdfe, 0xdff, 0xe00, 
                    0xe02, 0xe03, 0xe04, 0xe05, 0xe06, 0xe07, 0xe08, 0xe09, 0xe0a, 0xe0b, 0xe0c, 
                    0xe0d, 0xe0e, 0xe0f, 0xe10, 0xe11, 0xe12, 0xe13, 0xe14
                result.b = 0
                return result
    else
        if (result == 0xd21)
            result.b = 1
            return result
        
        if (result == 0xc0c)
            result.b = 1
            return result
        
        cond:9_1 = result == 0xc2a
else if (result s<= 0x112a)
    if (result == 0x112a)
        result.b = 1
        return result
    
    if (result == 0x1103)
        result.b = 1
        return result
    
    if (result == 0x1112)
        result.b = 1
        return result
    
    cond:9_1 = result == 0x1114
else if (result s> 0x112f)
    if (result == 0x1134)
        result.b = 1
        return result
    
    cond:9_1 = result == 0x1309
else
    if (result == 0x112f)
        result.b = 1
        return result
    
    if (result == 0x112c)
        result.b = 1
        return result
    
    cond:9_1 = result == 0x112e

if (cond:9_1)
    result.b = 1
    return result

result.b = 0
return result
