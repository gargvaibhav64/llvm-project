; RUN: llc -mtriple=s390x-linux-gnu -relocation-model=pic < %s | FileCheck %s

@foo = global i32 42

define i32* @get_foo() {
  ret i32* @foo
}

; CHECK: larl    %r2, foo{{$}}

!llvm.module.flags = !{!0}

!0 = !{i32 1, !"PIE Level", i32 2}
