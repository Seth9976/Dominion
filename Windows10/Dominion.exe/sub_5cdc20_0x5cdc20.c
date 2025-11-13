// 函数: sub_5cdc20
// 地址: 0x5cdc20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
bool cond:1_1

if (arg2 s> 0x3e9)
    if (arg2 - 0x3ea u> 0x78)
    label_5cdcee:
        
        if (arg2 - 0x452 u<= 0x21)
            arg1.b = 1
            return arg1
        
        if (arg2 - 7 u> 0x41)
            arg1.b = 0
            return arg1
        
        if (arg2 s>= 0x48)
            sub_591930()
        
        arg1.b = *((arg2 << 4) + 0xb81ffc) == 0x1128
        return arg1
    
    switch (arg2)
        case 0x3ea
            if ((*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42bc) & 1) != 0)
                arg1.b = 1
                return arg1
            
            uint32_t ecx_4 = sub_5cc5e0(arg3)
            
            if (*(ecx_4 + 0x4d0c) != 0)
                arg1.b = 1
                return arg1
            
            arg1.b = 0
            
            if (arg4 s< 8)
                return arg1
            
            *(ecx_4 + 0x4d0c) = 1
            arg1.b = 1
            return arg1
        case 0x3eb
            if (arg3 != data_b80b44)
                arg1.b = 1
                return arg1
            
            arg1 = sub_5cda30(data_b80b08)
            
            if (arg1 == 1 || arg1 == 4)
                arg1.b = 0
                return arg1
            
            cond:1_1 = arg1 == 5
        case 0x3ec, 0x44d, 0x45d, 0x45f, 0x460, 0x461, 0x462
            arg1.b = 1
            return arg1
        case 0x3ed, 0x3ee, 0x3ef, 0x3f0, 0x3f1, 0x3f2, 0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 
                0x3f9, 0x3fa, 0x3fb, 0x3fc, 0x3fd, 0x3fe, 0x3ff, 0x400, 0x401, 0x402, 0x403, 0x404, 
                0x405, 0x406, 0x407, 0x408, 0x409, 0x40a, 0x40b, 0x40c, 0x40d, 0x40e, 0x40f, 0x410, 
                0x411, 0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41a, 0x41b, 0x41c, 
                0x41d, 0x41e, 0x41f, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 
                0x429, 0x42a, 0x42b, 0x42c, 0x42d, 0x42e, 0x42f, 0x430, 0x431, 0x432, 0x433, 0x434, 
                0x435, 0x436, 0x437, 0x438, 0x439, 0x43a, 0x43b, 0x43c, 0x43d, 0x43e, 0x43f, 0x440, 
                0x441, 0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44a, 0x44b, 0x44c, 
                0x44e, 0x44f, 0x450, 0x452, 0x453, 0x454, 0x455, 0x456, 0x457, 0x458, 0x459, 0x45a, 
                0x45b, 0x45c, 0x45e
            goto label_5cdcee
        case 0x451
            arg1.b = 0
            return arg1
else
    if (arg2 == 0x3e9)
        arg1.b = 1
        return arg1
    
    if (arg2 != 2)
        goto label_5cdcee
    
    if (data_b80b08 != 0x2b)
        arg1.b = 1
        return arg1
    
    arg1 = data_b604e0
    
    if (arg1 == 0xffffffff)
        arg1 = 0
    
    cond:1_1 = data_b80b44 == arg1

if (cond:1_1)
    arg1.b = 0
    return arg1

arg1.b = 1
return arg1
