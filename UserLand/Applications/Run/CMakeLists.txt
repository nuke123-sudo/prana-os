compile_gml(Run.gml RunGML.h run_gml)

set(SOURCES
    main.cpp
    RunWindow.cpp
    RunWindow.h
    RunGML.h
)

pranaos_app(Run ICON app-run)
target_link_libraries(Run LibCore LibDesktop LibGUI)
