// 函数: _Z21TutorialExecuteAction17DomTutorialAction11DomCardEnum
// 地址: 0xae8748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1.d - 1)

if (x8.d u> 9)
    return 

int32_t x19_1 = arg2

switch (x8)
    case 0
        DomZoomDismiss(false)
        return DomZoomPile(GetPile(zx.q(x19_1)), true) __tailcall
    case 1, 3, 9
        return DomZoomDismiss(false) __tailcall
    case 2
        DomZoomDismiss(false)
        return DomZoomCard(GetCardInHand(zx.q(x19_1)), true) __tailcall
    case 4
        DomZoomDismiss(false)
        return DomZoomCard(GetCardAnywhere(zx.q(x19_1)), true) __tailcall
    case 7
        void* x0_10 = GetActiveProfile()
        
        if (*(GetClient() + 0x5068) != 0)
            int32_t x8_6 = *(ActiveGameSafe() + 0x1c)
            
            if (x8_6 s<= 0x6d)
                int32_t x10_6 = *(x0_10 + 0x4340)
                int32_t x8_8
                
                if (x10_6 s> x8_6 - 0x64)
                    x8_8 = x10_6
                else
                    x8_8 = x8_6 - 0x64
                
                *(x0_10 + 0x4340) = x8_8
            
            SaveProfiles()
        
        return GameQueueExit(0, false) __tailcall
    case 8
        DomZoomDismiss(false)
        return DomZoomCard(GetCardInPlay(zx.q(x19_1)), true) __tailcall
