## Build
`source $HOME/osbook/devenv/buildenv.sh`
`cd kernel && make clean && make` 
`cd ~/$HOME/edk2/`

`build`
`$HOME/osbook/devenv/run_qemu.sh $HOME/edk2/Build/CalmLoaderPkgX64/DEBUG_CLANG38/X64/Loader.efi $HOME/go/src/github.com/shintard/CalmOS/kernel/kernel.elf`