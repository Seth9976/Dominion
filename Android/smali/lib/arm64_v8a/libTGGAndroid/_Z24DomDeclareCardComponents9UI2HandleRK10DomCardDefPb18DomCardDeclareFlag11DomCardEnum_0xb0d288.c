// 函数: _Z24DomDeclareCardComponents9UI2HandleRK10DomCardDefPb18DomCardDeclareFlag11DomCardEnum
// 地址: 0xb0d288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x20 = arg5
XString* x0_1 = CardGetTranslation(arg2)
UI2SetText(zx.q(x19), &data_182cd00, x0_1, 0xffffffff)
UI2SetText(zx.q(x19), &data_182cd18, x0_1 + 8, 0xffffffff)

if (*(GetLocalSettings() + 0x28) == 0)
    int32_t x8_1 = *(x0_1 + 0x10)
    
    if (x8_1 == 2)
        UI2SetState(zx.q(x19), &data_182cd60, 0xffffffff, 0)
    else if (x8_1 == 1)
        UI2SetState(zx.q(x19), &data_182cd48, 0xffffffff, 0)

XString::XString()
XString var_48

if ((HasHeirloom(arg2, &var_48) & 1) != 0)
    UI2SetState(zx.q(x19), &data_182cd78, 0xffffffff, 0)
    UI2SetText(zx.q(x19), &data_182cd90, &var_48, 0xffffffff)

char x0_11 = DomDeclareCost(zx.q(x19), arg2, zx.q(arg4))

if (arg3 != 0)
    *arg3 = x0_11 & 1

if (x20 == 0)
    int64_t* x8_4 = *(arg2 + 0x68)
    
    if (x8_4 != 0)
        UI2SetImage(zx.q(x19), &data_182cda8, *x8_4, 0xffffffff)
else
    uint64_t x1_3
    
    if (*(GetClient() + 0x5068) == 0)
        x1_3 = 0x18
    else
        x1_3 = zx.q(*(ActiveGame() + 0x30))
    
    UI2SetImage(zx.q(x19), &data_182cda8, **(DomDefGet(zx.q(x20), x1_3) + 0x68), 0xffffffff)

return XString::~XString()
