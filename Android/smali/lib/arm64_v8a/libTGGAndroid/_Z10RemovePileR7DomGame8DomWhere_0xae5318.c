// 函数: _Z10RemovePileR7DomGame8DomWhere
// 地址: 0xae5318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t entry_x2
MovePileTo(zx.q(x19), 1, entry_x2, true)
int32_t* x0_2 = DomBoardPile(arg1, x19)
int32_t x21 = *x0_2
*x0_2 = 0

if (*(arg1 + 0x19ac) s>= 1)
    int64_t i = 0
    
    do
        void* x8_2 = arg1 + (i << 5)
        
        if (*(x8_2 + 0x15f70) == x19)
            int32_t j_1 = *(x8_2 + 0x15f7c)
            
            if (j_1 != 0)
                void* x8_3 = arg1 + (i << 5)
                
                if (*(x8_3 + 0x15f68) == 0x600)
                    MoveToken(*(DomGetContext() + 8), zx.q(i.d), 6)
                else if (*(x8_3 + 0x15f6c) != 0xffffffff)
                    MoveToken(*(DomGetContext() + 8), zx.q(i.d), 0x3f1)
                else if (j_1 s>= 1)
                    int32_t j
                    
                    do
                        MoveToken(*(DomGetContext() + 8), zx.q(i.d), 1)
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
        
        i += 1
    while (i s< sx.q(*(arg1 + 0x19ac)))

int64_t var_58 = 0
int32_t var_60 = 0
int32_t var_68 = 0
int32_t var_70 = 0
return NotifyEffect(arg1, 0x2f, 0xffffffff, 0, zx.q(x19), zx.q(x21), 0, 0)
