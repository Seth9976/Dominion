// 函数: _Z22DefParseReadAttribTreePvR10AttribTreePK8DefFieldP12DefParseTree
// 地址: 0xc8c528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 8)
int64_t x23_1

if (x8 == 0)
    *(arg2 + 8) = 1
    int64_t x0_3 = XCalloc(0x18)
    x23_1 = x0_3
    *arg2 = x0_3
else
    void* x23 = *arg2
    *(arg2 + 8) = x8 + 1
    int64_t x0_1 = XCalloc((x8 + 1) * 0x18)
    int64_t x8_3 = sx.q(*(arg2 + 8))
    *arg2 = x0_1
    memcpy(x0_1, x23, x8_3 * 0x18 - 0x18)
    XFree(x23)
    x23_1 = *arg2

int64_t* i_1 = *(arg4 + 8)
int32_t x24 = 0
int64_t x25 = sx.q(*(arg2 + 8)) - 1

if (i_1 != 0)
    int64_t* i
    
    do
        i = i_1[1]
        x24 += operator==(*i_1, *(arg3 + 8)) & 1
        i_1 = i
    while (i != 0)

int32_t x26_1 = *(arg4 + 0x18) - x24
int64_t result = XCalloc(x26_1 << 4)
int32_t* x8_7 = x23_1 + x25 * 0x18
*(x8_7 + 8) = result
*x8_7 = x26_1
x8_7[4] = x24
DefParseItem** x26_2 = *(arg4 + 8)

if (x26_2 != 0)
    AttribTable* x22_1 = *(arg3 + 0x38)
    int32_t x27_1 = 0
    
    while (true)
        DefParseItem* x24_1 = *x26_2
        x26_2 = x26_2[1]
        int64_t fp_1 = *(*arg2 + x25 * 0x18 + 8)
        int32_t x0_9
        uint32_t x2_2
        x0_9, x2_2 = operator==(x24_1, *(arg3 + 8))
        
        if ((x0_9 & 1) != 0)
            result = DefParseReadAttribTree(arg1, arg2, arg3, *(x24_1 + 0x18))
            
            if (x26_2 == 0)
                break
        else
            result = DefParseReadTagValue(x22_1, fp_1 + (sx.q(x27_1) << 4), x2_2, x24_1)
            
            if ((result.d & 1) == 0)
                XString::GetString()
                result = XTrace("unknown tag %s")
                
                if (x26_2 == 0)
                    break
            else
                x27_1 += 1
                
                if (x26_2 == 0)
                    break

return result
