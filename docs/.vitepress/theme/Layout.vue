<template>
  <Layout>
    <template #aside-top>
      <SponsorBanner />
    </template>
  </Layout>
</template>

<script setup>
import DefaultTheme from 'vitepress/theme'
import SponsorBanner from './components/SponsorBanner.vue'

const { Layout } = DefaultTheme
</script>
