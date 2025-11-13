// 函数: _Z13HarborVillagev
// 地址: 0xaa1e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
int32_t x0 = ThisCard(false, nullptr)
void* x0_1 = DomGetContext()
void* x9_1 = *(x0_1 + 8) + sx.q(*(x0_1 + 0x18)) * 0x5a30
int64_t x8_1 = sx.q(*(x9_1 + 0x181cc))
int64_t x20_1
bool cond:0_1

do
    x20_1 = x8_1 - 1
    
    if (x8_1 s< 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return LandingParty() __tailcall
    
    cond:0_1 = *(x9_1 + 0x19b14 + (x8_1 << 2)) != x0
    x8_1 = x20_1
while (cond:0_1)
int32_t x0_4

if ((IsChameleoned(ThisCard(false, nullptr)) & 1) != 0)
    x0_4 = x20_1.d | 0x80000000
else
    x0_4 = x20_1.d

FromSingleInt(x0_4)
void var_ca8
return NextTimeThisTurn(9, sub_aad460, sub_aad59c, 0, &var_ca8, 0, nullptr, 0xffffffff)
