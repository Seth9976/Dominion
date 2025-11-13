// 函数: _ZN4XMapI11DomCardEnum18DomCardTranslationE5SetAtERKS0_RKS1_
// 地址: 0xb0d104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
uint64_t x23 = (zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(arg1 + 8))
void* entry_x2

for (int32_t* i = *(*arg1 + (x23 << 3)); i != 0; i = *(i + 0x28))
    if (x8 == *i)
        XString::operator=(&i[2])
        XString::operator=(&i[4])
        i[6] = *(entry_x2 + 0x10)
        return XString::operator=(&i[8])

int32_t* x0 = XPooledMalloc(0x30)
*x0 = *arg2
XString::XString(&x0[2])
XString::XString(&x0[4])
x0[6] = *(entry_x2 + 0x10)
int64_t result = XString::XString(&x0[8])
uint64_t x9_2 = x23 << 3
*(x0 + 0x28) = *(*arg1 + x9_2)
*(*arg1 + x9_2) = x0
*(arg1 + 0xc) += 1
return result
