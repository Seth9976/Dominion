// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE30__parse_character_class_escapeIPKcEET_S7_S7_
// 地址: 0xf1321c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (arg2 != entry_x2)
    uint64_t x8_2 = zx.q(zx.d(*arg2) - 0x44)
    void** x21_1
    void** x21_2
    
    if (x8_2.d u<= 0x33)
        switch (x8_2)
            case 0
                void** x0 = operator new(0xa8)
                int32_t x9_1 = *(arg1 + 0x18)
                x21_1 = x0
                sub_f140d8(x0, arg1, *(*(arg1 + 0x38) + 8), 1, x9_1.b & 1, (x9_1 u>> 3).b & 1)
            label_f1331c:
                *(*(arg1 + 0x38) + 8) = x21_1
                *(arg1 + 0x38) = x21_1
                x21_1[0x14].w |= 0x40
                return &arg2[1]
            case 0xf
                void** x0_1 = operator new(0xa8)
                int32_t x9_2 = *(arg1 + 0x18)
                x21_1 = x0_1
                sub_f140d8(x0_1, arg1, *(*(arg1 + 0x38) + 8), 1, x9_2.b & 1, (x9_2 u>> 3).b & 1)
            label_f133b4:
                *(*(arg1 + 0x38) + 8) = x21_1
                *(arg1 + 0x38) = x21_1
                x21_1[0x14].w |= 1
                return &arg2[1]
            case 0x13
                void** x0_2 = operator new(0xa8)
                int32_t x9_3 = *(arg1 + 0x18)
                x21_2 = x0_2
                sub_f140d8(x0_2, arg1, *(*(arg1 + 0x38) + 8), 1, x9_3.b & 1, (x9_3 u>> 3).b & 1)
            label_f13368:
                *(*(arg1 + 0x38) + 8) = x21_2
                *(arg1 + 0x38) = x21_2
                x21_2[0x14].w |= 0x60
                sub_f13f08(x21_2, 0x5f)
                return &arg2[1]
            case 0x20
                void** x0_3 = operator new(0xa8)
                int32_t x9_4 = *(arg1 + 0x18)
                x21_1 = x0_3
                sub_f140d8(x0_3, arg1, *(*(arg1 + 0x38) + 8), 0, x9_4.b & 1, (x9_4 u>> 3).b & 1)
                goto label_f1331c
            case 0x2f
                void** x0_6 = operator new(0xa8)
                int32_t x9_6 = *(arg1 + 0x18)
                x21_1 = x0_6
                sub_f140d8(x0_6, arg1, *(*(arg1 + 0x38) + 8), 0, x9_6.b & 1, (x9_6 u>> 3).b & 1)
                goto label_f133b4
            case 0x33
                void** x0_4 = operator new(0xa8)
                int32_t x9_5 = *(arg1 + 0x18)
                x21_2 = x0_4
                sub_f140d8(x0_4, arg1, *(*(arg1 + 0x38) + 8), 0, x9_5.b & 1, (x9_5 u>> 3).b & 1)
                goto label_f13368

return arg2
