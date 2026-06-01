<template>
  <div v-if="selectedAd" class="sponsor-banner">
    <div class="sponsor-label">Sponsored</div>
    <a 
      :href="selectedAd.link" 
      target="_blank" 
      rel="noopener noreferrer"
      class="sponsor-link"
    >
      <img 
        :src="selectedAd.img" 
        :alt="selectedAd.alt || 'Sponsored advertisement'"
        class="sponsor-image"
      />
    </a>
  </div>
</template>

<script setup>
import { ref, onMounted } from 'vue'
import { withBase } from 'vitepress'

// Ad configuration - add your ads here
const ads = [
  { 
    img: 'https://raw.githubusercontent.com/TamimEhsan/interview-questions-bangladesh/refs/heads/master/docs/resource/ads/chakri-koi-v2.png', 
    link: 'https://chakri-koi.com',
    alt: 'Chakri.com - Find Your Dream Job in Bangladesh'
  },
 // { 
 //   img: '/ads/ad2.png', 
 //   link: 'https://example.org',
 //   alt: 'Advertisement 2'
 // }
]

const selectedAd = ref(null)

// Randomly select an ad on component mount
onMounted(() => {
  if (ads.length > 0) {
    const randomIndex = Math.floor(Math.random() * ads.length)
    // Apply base path to image URL
    const ad = { ...ads[randomIndex] }
    ad.img = withBase(ad.img)
    selectedAd.value = ad
  }
})
</script>

<style scoped>
.sponsor-banner {
  margin-bottom: 16px;
  padding: 12px;
  background: var(--vp-c-bg-soft);
  border: 1px solid var(--vp-c-divider);
  border-radius: 8px;
  text-align: center;
  max-width: 220px;
}

.sponsor-label {
  font-size: 11px;
  text-transform: uppercase;
  color: var(--vp-c-text-3);
  letter-spacing: 0.5px;
  margin-bottom: 8px;
  font-weight: 600;
}

.sponsor-link {
  display: block;
  text-decoration: none;
  transition: opacity 0.2s;
}

.sponsor-link:hover {
  opacity: 0.8;
}

.sponsor-image {
  width: 100%;
  height: auto;
  border-radius: 4px;
  display: block;
}

/* Responsive adjustments */
@media (max-width: 960px) {
  .sponsor-banner {
    max-width: 100%;
  }
}
</style>
