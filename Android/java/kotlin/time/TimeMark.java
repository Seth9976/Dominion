package kotlin.time;

import kotlin.Metadata;

@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000B\n\u0002\b\u0005\bg\u0018\u00002\u00020\u0001J\u000E\u0010\u0002\u001A\u00020\u0003H&ø\u0001\u0000ø\u0001\u0001J\b\u0010\u0004\u001A\u00020\u0005H\u0016J\b\u0010\u0006\u001A\u00020\u0005H\u0016J\u0014\u0010\u0007\u001A\u00020\u00002\u0006\u0010\b\u001A\u00020\u0003H\u0096\u0002ø\u0001\u0001J\u0014\u0010\t\u001A\u00020\u00002\u0006\u0010\b\u001A\u00020\u0003H\u0096\u0002ø\u0001\u0001\u0082\u0002\b\n\u0002\b!\n\u0002\b\u0019¨\u0006\n"}, d2 = {"Lkotlin/time/TimeMark;", "", "elapsedNow", "Lkotlin/time/Duration;", "hasNotPassedNow", "", "hasPassedNow", "minus", "duration", "plus", "kotlin-stdlib"}, k = 1, mv = {1, 7, 1}, xi = 0x30)
public interface TimeMark {
    @Metadata(k = 3, mv = {1, 7, 1}, xi = 0x30)
    public static final class DefaultImpls {
        public static boolean hasNotPassedNow(TimeMark timeMark0) {
            return Duration.isNegative-impl(timeMark0.elapsedNow-UwyO8pc());
        }

        public static boolean hasPassedNow(TimeMark timeMark0) {
            return !Duration.isNegative-impl(timeMark0.elapsedNow-UwyO8pc());
        }

        public static TimeMark minus-LRDsOJo(TimeMark timeMark0, long v) {
            return timeMark0.plus-LRDsOJo(Duration.unaryMinus-UwyO8pc(v));
        }

        public static TimeMark plus-LRDsOJo(TimeMark timeMark0, long v) {
            return new AdjustedTimeMark(timeMark0, v, null);
        }
    }

    long elapsedNow-UwyO8pc();

    boolean hasNotPassedNow();

    boolean hasPassedNow();

    TimeMark minus-LRDsOJo(long arg1);

    TimeMark plus-LRDsOJo(long arg1);
}

