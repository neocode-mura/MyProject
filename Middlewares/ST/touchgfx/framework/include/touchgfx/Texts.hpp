/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.13.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef TEXTS_HPP
#define TEXTS_HPP

#include <touchgfx/Unicode.hpp>

namespace touchgfx
{
/**
 * @typedef uint16_t LanguageId
 *
 * @brief Language IDs generated by the text converter are uint16_t typedef'ed.
 */
typedef uint16_t LanguageId;

/**
 * @class Texts Texts.hpp touchgfx/Texts.hpp
 *
 * @brief Class for setting language and getting texts.
 *
 *        Class for setting language and getting texts. The language set will determine which
 *        texts will be used.
 */
class Texts
{
public:

    /**
     * @fn static void Texts::setLanguage(LanguageId id);
     *
     * @brief Sets the current language for texts.
     *
     *        Sets the current language for texts.
     *
     * @param id The id of the language.
     */
    static void setLanguage(LanguageId id);

    /**
     * @fn static LanguageId Texts::getLanguage()
     *
     * @brief Gets the current language.
     *
     *        Gets the current language.
     *
     * @return The id of the language.
     */
    static LanguageId getLanguage()
    {
        return currentLanguage;
    }

    /**
     * @fn const Unicode::UnicodeChar* Texts::getText(TypedTextId id) const
     *
     * @brief Get text in the set language.
     *
     *        Get text in the set language.
     *
     * @param id The id of the text to lookup.
     *
     * @return The text.
     */
    const Unicode::UnicodeChar* getText(TypedTextId id) const;

    /**
     * @fn static void setTranslation(touchgfx::LanguageId id, const void* translation)
     *
     * @brief Adds or replaces a translation.
     *
     *        Adds or replaces a translation. This function allows an
     *        application to add a translation at runtime.
     *
     * @param id          The id of the language to add or replace.
     * @param translation A pointer to the translation in flash or RAM.
     */
    static void setTranslation(touchgfx::LanguageId id, const void* translation);

private:
    static LanguageId currentLanguage;
};
} // namespace touchgfx

#endif // TEXTS_HPP
