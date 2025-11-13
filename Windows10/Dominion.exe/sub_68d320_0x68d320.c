// 函数: sub_68d320
// 地址: 0x68d320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 - 1 u<= 0x12)
    switch (arg3 + &jump_table_68d3cc[6]:3)
        case &lookup_table_68d3e8
            return "their"
        case &lookup_table_68d3e8[1]
            return sub_68d2c0(arg2, arg4) __tailcall
        case &lookup_table_68d3e8[2]
            switch (*(arg2 + 0xc) - 2)
                case 1
                    return &data_877ef0
                case 3
                    return &data_877eec
            
            return &data_877ee0
        case &lookup_table_68d3e8[3]
            if (*(arg2 + 0xc) != 4)
                return "onze"
            
            return &data_877ed8
        case &lookup_table_68d3e8[7]
            if (*(arg2 + 0xc) == 2)
                if (*(arg2 + 0x18) == 0)
                    return "i loro"
                
                return "il loro"
            
            if (*(arg2 + 0x18) == 0)
                return "le loro"
            
            return "la loro"

return &data_801800
