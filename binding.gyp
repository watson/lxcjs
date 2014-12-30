{
  "targets": [
    {
      "target_name": "lxcjs",
      "sources": [ "lxcjs.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
