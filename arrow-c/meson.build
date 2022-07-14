project('arrow-c', 'c',
  license : 'Apache-2.0',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'c_std=c99',
  ]
)

deps = [
  dependency('arrow'),
  dependency('arrow-glib'),
  dependency('glib-2.0'),
]

exe = executable(
  'arrowc',
  'src/main.c',
  'src/utils.c',
  'src/examples-arrays.c',
  'src/examples-scalars.c',
  'src/examples-values.c',
  dependencies : deps,
  install : true)

test('basic', exe)
