{
  "targets": [
    {
      "target_name": "lxcjs",
      "sources": [ "src/lxcjs.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "./src"
      ],
      "libraries": [
        "<(module_root_dir)/lxc/lxc/liblxc.so"
      ]
    }
  ]
}
