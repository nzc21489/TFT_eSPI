if (NOT TARGET tft_espi)
    add_library(tft_espi INTERFACE)

    target_sources(tft_espi INTERFACE
            ${CMAKE_CURRENT_LIST_DIR}/TFT_eSPI.cpp
    )

    target_include_directories(tft_espi INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Processors)
    target_include_directories(tft_espi INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Fonts)
    target_include_directories(tft_espi INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Fonts/Custom)
    target_include_directories(tft_espi INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Fonts/GFXFF)
    target_include_directories(tft_espi INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Fonts/TrueType)
    target_link_libraries(tft_espi INTERFACE spi hardware_dma pico_stdlib)
endif()
