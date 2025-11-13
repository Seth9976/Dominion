// 函数: sub_5d4360
// 地址: 0x5d4360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
int32_t eax_1 = sub_5d1210(eax, *(arg1 + 0x5c), *(arg1 + 0x58), *(arg1 + 0x60), *(arg1 + 0x64))
int32_t ecx_1 = *(arg1 + 0x5c)
int32_t edx_1 = *(arg1 + 0x30)

if (ecx_1 s<= 0x3ea)
    if (ecx_1 == 0x3ea)
        return 1
    
    if (ecx_1 == 2)
        return 2
    
    if (ecx_1 == 3)
        return 7
else if (ecx_1 - 0x3eb u<= 0x77)
    bool cond:1_1
    
    switch (ecx_1)
        case 0x3eb
            int32_t eax_13 = data_b80b08
            
            if (eax_13 == 0x33 || eax_13 == 0x34 || eax_13 == 0x101)
                return 6
            
            return 2
        case 0x3ec, 0x44d, 0x451, 0x462
            return 2
        case 0x3ed, 0x3f1, 0x3f2, 0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 0x3f9, 0x3fa, 0x3fb, 
                0x3fc, 0x3fd, 0x3fe, 0x3ff, 0x400, 0x401, 0x402, 0x403, 0x404, 0x405, 0x406, 0x407, 
                0x408, 0x409, 0x40a, 0x40b, 0x40c, 0x40d, 0x40e, 0x40f, 0x410, 0x411, 0x412, 0x413, 
                0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41a, 0x41b, 0x41c, 0x41d, 0x41e, 0x41f, 
                0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 0x42a, 0x42b, 
                0x42c, 0x42d, 0x42e, 0x42f, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 0x436, 0x437, 
                0x438, 0x439, 0x43a, 0x43b, 0x43c, 0x43d, 0x43e, 0x43f, 0x440, 0x441, 0x442, 0x443, 
                0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44a, 0x44b, 0x44c, 0x452, 0x453, 0x454, 
                0x455, 0x456, 0x457, 0x458, 0x459, 0x45a, 0x45b, 0x45c, 0x45d, 0x45e, 0x45f, 0x460, 
                0x461
            goto label_5d44a9
        case 0x3ee
            if (data_b80afc == 2)
                return 5
            
            int32_t eax_11 = data_b80b08
            
            if (eax_11 == 0x27)
                return 0xb
            
            if (eax_11 == 0x7b || eax_11 == 0x3b)
                return 0xa
            
            if (eax_11 != 0xa3 && eax_11 != 0xb3)
                return 4
            
            return 7
        case 0x3ef, 0x3f0
            int32_t eax_5 = data_b80b08
            
            if (eax_5 == 0x27)
                return 0xb
            
            if (eax_5 != 0x7b && eax_5 != 0x3b)
                return 8
            
            return 0xa
        case 0x44e
            return 6
        case 0x44f
            if (data_b80afc != 2)
                return 4
            
            cond:1_1 = data_b80b08 != 0x125
        case 0x450
            if (data_b80afc != 2)
                return 4
            
            cond:1_1 = data_b80b08 != 0x126
    
    if (cond:1_1)
        return 4
    
    return 5

label_5d44a9:

if (edx_1 == 0x1128)
    return 2

if (edx_1 == 0x1301)
    return 2

if (edx_1 == 0xd30 || edx_1 == 0xd3d)
    return 3

int32_t eax_15
eax_15.b = eax_1 s<= 5
return (eax_15 << 1) + 2
